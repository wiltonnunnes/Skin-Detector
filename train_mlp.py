import tensorflow as tf
import pandas
from mlp import create_model

df = pandas.read_csv('Skin_NonSkin.txt', '	')

y = df.pop('y')

dataset = tf.data.Dataset.from_tensor_slices((df.values, y.values))

model = create_model()