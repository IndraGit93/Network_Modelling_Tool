from pyvis.network import Network
import pandas as pd


df = pd.read_csv('input.csv')
threshold_df = pd.read_csv('threshold.csv')

node_utilization_dict = dict(zip(threshold_df['Node'], threshold_df['Utilization']))

net = Network(notebook=True)

midpoint = len(df) // 2

for idx, row in df.iterrows():
    node_start_color = 'red' if row['Start'] in node_utilization_dict and node_utilization_dict[row['Start']] > 100 else ('orange' if row['Start'] in node_utilization_dict and node_utilization_dict[row['Start']] > 80 else 'blue')
    node_end_color = 'red' if row['End'] in node_utilization_dict and node_utilization_dict[row['End']] > 100 else ('orange' if row['End'] in node_utilization_dict and node_utilization_dict[row['End']] > 80 else 'blue')

    net.add_node(row['Start'], color=node_start_color)
    net.add_node(row['End'], color=node_end_color)
    net.add_edge(row['Start'], row['End'], value=row['Weight'], title=f'Capacity: {row["Capacity"]}, Weight: {row["Weight"]}')

net.show('graph.html')
