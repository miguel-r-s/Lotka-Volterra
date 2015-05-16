# Lotka-Volterra
## Exploring Predator-Prey relationships

[Lotka-Volterra](http://en.wikipedia.org/wiki/Lotka%E2%80%93Volterra_equation) equations describe the evolution of a population of predators and preys.

### Number of predators and preys over time

The following equations dictate the **variation of the number of predators (x) and preys (y)** as a function of the **number of predators and preys**.

![equation](http://i.imgur.com/DkdNe79.png)

As an example, lets see how a population of 10 predators and 5 preys evolves over time. 

In this example we are using:

* α = 1.5
* β = 1.2
* γ = 2.1
* δ = 1.8

At the starting point, the number of predators is 10 and the number of preys is 5.

![Example](http://i.imgur.com/80Y8Suk.png)

It is really interesting to look at these results. As the equation dictates, the number of preys has positive influence in the number of predators, and the number of predators has a negative influence in the number of preys.

The fact that the solution does not diverge is what make co-habitation possible for all predator-prey systems in our ecosystem.

### Phase Space

It is also interesting to look at the relationship between the number of predators and preys, by plotting a graph where the x axis represents the number of preys and the y axis represents the number of predators. This is called the *phase space*.

![Phase Space](http://i.imgur.com/oGEWtxG.png)

In each cycle, there is a moment when the number of preys is extremely low and the number of predators very high. 
As Lotka-Volterra equations assume no statistical fluctuations in population numbers, the solution is relatively stable. 

In a real-life situation, the number of predators and preys may have statistical fluctuations, possibly causing extintion of the prey during this part of the cycle, and therefore, extinction of the predator.
