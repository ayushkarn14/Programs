% best_first_search(Start, Solution)
best_first_search(Start, Solution) :-
    best_first_search_aux([node(Start, [], 0)], Solution).

% best_first_search_aux(Queue, Solution)
best_first_search_aux([node(State, Path, _)|_], Path) :-
    goal(State).
best_first_search_aux([node(State, Path, _)|Rest], Solution) :-
    findall(NewNode, (move(State, NewState), append(Path, [NewState], NewPath), heuristic(NewState, H), G is H, F is G + H, NewNode = node(NewState, NewPath, F)), Children),
    merge_sort(Children, SortedChildren),
    append(SortedChildren, Rest, NewQueue),
    best_first_search_aux(NewQueue, Solution).

% Define the goal state
goal(State) :-
    % Define your goal condition here
    % For example:
    State = [5, 5, 5].

% Define the possible moves from a given state
move(State, NewState) :-
    % Define your moves here
    % For example, change one of the values by +/- 1
    select(X, State, NewX, State1),
    select(Y, State1, NewY, State2),
    NewX is X - 1,
    NewY is Y + 1,
    NewState = [NewX, NewY | State2].

% Define the heuristic function
heuristic(State, H) :-
    % Define your heuristic function here
    % For example, calculate the sum of differences from the goal state
    goal(GoalState),
    sum_differences(State, GoalState, H).

sum_differences([], [], 0).
sum_differences([X|Xs], [Y|Ys], Sum) :-
    sum_differences(Xs, Ys, Rest),
    Diff is abs(X - Y),
    Sum is Diff + Rest.

% Merge sort implementation
merge_sort(List, Sorted) :-
    halve(List, Left, Right),
    merge_sort(Left, SortedLeft),
    merge_sort(Right, SortedRight),
    merge(SortedLeft, SortedRight, Sorted).
merge_sort([X], [X]).
merge_sort([], []).

halve(List, Left, Right) :-
    length(List, Len),
    HalfLen is Len // 2,
    length(Left, HalfLen),
    append(Left, Right, List).

merge([], L, L).
merge(L, [], L) :- L \= [].
merge([X|Xs], [Y|Ys], [X|Zs]) :- X =< Y, merge(Xs, [Y|Ys], Zs).
merge([X|Xs], [Y|Ys], [Y|Zs]) :- X > Y, merge([X|Xs], Ys, Zs).

% Example usage:
% To run the program, call best_first_search with the initial state:
% ?- best_first_search([0, 0, 0], Solution).
