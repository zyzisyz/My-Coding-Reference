# vector

Vectors are sequence containers representing arrays that can change in size.

向量（vector）是一系列表示数组的，可以改变大小的容器

Just like arrays, vectors use contiguous(临近的) storage locations for their elements, which means that their elements can also be accessed using offsets(开端) on regular pointers to its elements, and just as efficiently as in arrays. But unlike arrays, their size can change dynamically(动态的), with their storage being handled automatically by the container.

正如数组一样，向量用临近的存储空间存他们的元素，这意味着它们的元素也可以使用到其元素的常规指针上的偏移来访问，和原生数组一样高效。但和原生数组不同的是，他们的大小可以动态的改变，其存储空间被容器自动的控制。

Internally(本质地), vectors use a dynamically allocated(分配) array to store their elements. This array may need to be reallocated in order to grow in size when new elements are inserted, which implies(意味着) allocating a new array and moving all elements to it.

本质的，向量用一个动态分配的指针来存他的元素。当新的元素被插入时，为了增加大小，意味着这个数组应该重新分配新的数组并且要移动所有的元素到那。

 This is a relatively(相当的) expensive task in terms of processing time, and thus, vectors do not reallocate each time an element is added to the container.

这将花费相当大的计算机处理时间，因此，每次将元素添加到容器时，vector都不会重新分配。

Instead, vector containers may allocate some extra storage to accommodate(容纳) for possible growth, and thus the container may have an actual capacity greater than the storage strictly needed to contain its elements (i.e., its size). 

vector容器可能分配额外的空间容纳潜在的大小增长，因此这个容器的实际可能有比所需要存的元素大。（例如他的大小）

Libraries can implement(实行) different strategies for growth to balance between memory usage and reallocations, but in any case, reallocations should only happen at logarithmically(对数) growing intervals(间隔) of size so that the insertion of individual elements at the end of the vector can be provided with amortized constant time complexity (see push_back).

Librais可以实行不同用于平衡内存的使用和重新分配的策略。但是在任何的情况下，重新分配应该只发生在对数增长的大小间隔内，以便在向量的末尾插入单个元素可以提供分摊的恒定时间复杂度（见于push_back）。

Therefore, compared to arrays, vectors consume more memory in exchange for the ability to manage storage and grow dynamically in an efficient way.

因此，与原始数组相比，vector消耗更多的内存，以换取有效地管理存储和动态增长的能力。

Compared to the other dynamic sequence containers (deques, lists and forward_lists), vectors are very efficient accessing its elements (just like arrays) and relatively efficient adding or removing elements from its end. 

与其他动态顺序容器相比(deques, lists and forward_lists)，vector非常有效地访问它的元素（就像数组一样），并且相对高效地从其末尾添加或移除元素

For operations that involve inserting or removing elements at positions other than the end, they perform worse than the others, and have less consistent iterators and references than lists and forward_lists.

对于涉及到不在尾部的元素的插入和删除，他的表现差于其他的容器，而且含有相对于list和forward_lists更少的迭代器。