// 4. 使用迭代器（explicit iterator）
cout << "遍历4 - 迭代器: ";
for (auto it = arr.begin(); it != arr.end(); ++it)
{
    cout << *it << " ";
}

// 5. 反向迭代器
cout << "遍历5 - 反向迭代: ";
for (auto rit = arr.rbegin(); rit != arr.rend(); ++rit)
{
    cout << *rit << " ";
}

// 6. std::for_each + lambda
cout << "遍历6 - std::for_each + lambda: ";
std::for_each(arr.begin(), arr.end(), [](int x) { std::cout << x << " "; });

// 7. std::copy + ostream_iterator（快速输出序列）
cout << "遍历7 - std::copy + ostream_iterator: ";
std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(cout, " "));
