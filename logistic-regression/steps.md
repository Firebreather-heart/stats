#step1
    write function to initialize weights randomly θ0 and θ1
    select a learning rate and number of iterations
#step2
    implement the hypothesis function h(x) = 1 / (1 + e^(-z))
    Note: z = θ0 + θ1*x1 + θ2*x2
#step3
    implement the cost function
    J(θ) = -[1/N * ∑(y*log(h(x)) + (1-y)*log(1-h(x)))]
#step4
    implement gradient descent 
    θj := θj - α * ∂J(θ)/∂θj
    where α is the learning rate and ∂J(θ)/∂θj is the partial derivative of the cost function with respect to the j-th weight coefficient.
#step5
    implement the training iterative process
#step6
    implement prediction process