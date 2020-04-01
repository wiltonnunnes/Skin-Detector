from tensorflow.keras import Sequential, Dense

def create_model():
	model = Sequential()
	model.add(Dense(3, "tanh"))
	model.add(Dense(3, "tanh"))
	model.add(Dense(1, "tanh"))

	return model