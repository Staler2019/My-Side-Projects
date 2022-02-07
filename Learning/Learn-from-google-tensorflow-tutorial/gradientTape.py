import tensorflow as tf

x = tf.Variable(initial_value=3.)
with tf.GradientTape() as tape:     # 在 tf.GradientTape() 的上下文內，所有計算步驟都會被記錄以用於推導
    y = tf.square(x)
y_grad = tape.gradient(y, x)        # 計算y關於x的導數
print(y, y_grad)
