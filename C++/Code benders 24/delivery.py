def optimal_delivery_route(num_locations, delivery_locations):
    # Sort delivery locations based on their Manhattan distance from the warehouse
    sorted_locations = sorted(
        delivery_locations, key=lambda loc: abs(loc[1]) + abs(loc[2])
    )

    # Create the optimal delivery route
    route = [0]  # Starting from the warehouse
    for location in sorted_locations:
        route.append(location[0])

    return route


# Input reading and function call
if __name__ == "__main__":
    num_locations = int(input())
    delivery_locations = eval(input())

    result = optimal_delivery_route(num_locations, delivery_locations)
    print(" ".join(map(str, result)))
