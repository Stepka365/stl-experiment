#include "Namespaces.h"

std::vector<std::string> data::make_paths(const std::string& part, const std::string& fold) {
    std::vector<std::string> res;
    for (int i = 0; i < 10; ++i) {
        std::string path = fold + part + "\\" + part + std::to_string(i + 1) + ".txt";
        res.push_back(path);
    }
    return res;
}

std::vector<char> data::load_vector_char(const std::string& path_file) {
    std::vector<char> vector;
    std::ifstream file(path_file);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }
    char c;
    while (file >> c) {
        vector.push_back(c);
    }
    file.close();
    return vector;
}

std::vector<int> data::load_vector_int(const std::string& path_file) {
    std::vector<int> vector;
    std::ifstream file(path_file);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }
    int num;
    while (file >> num) {
        vector.push_back(num);
    }
    file.close();
    return vector;
}

std::vector<double> data::load_vector_double(const std::string& path_file) {
    std::vector<double> vector;
    std::ifstream file(path_file);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }
    double num;
    while (file >> num) {
        vector.push_back(num);
    }
    file.close();
    return vector;
}

std::vector<std::string> data::load_vector_string(const std::string& path_file) {
    std::vector<std::string> vector;
    std::ifstream file(path_file);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }
    std::string str;
    while (file >> str) {
        vector.push_back(str);
    }
    file.close();
    return vector;
}

std::list<char> data::load_list_char(const std::string& path_file) {
    std::list<char> list;
    std::ifstream file(path_file);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }
    char c;
    while (file >> c) {
        list.push_back(c);
    }
    file.close();
    return list;
}

std::list<int> data::load_list_int(const std::string& path_file) {
    std::list<int> list;
    std::ifstream file(path_file);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }
    int num;
    while (file >> num) {
        list.push_back(num);
    }
    file.close();
    return list;
}

std::list<double> data::load_list_double(const std::string& path_file) {
    std::list<double> list;
    std::ifstream file(path_file);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }
    double num;
    while (file >> num) {
        list.push_back(num);
    }
    file.close();
    return list;
}

std::list<std::string> data::load_list_string(const std::string& path_file) {
    std::list<std::string> list;
    std::ifstream file(path_file);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }
    std::string str;
    while (file >> str) {
        list.push_back(str);
    }
    file.close();
    return list;
}

std::deque<char> data::load_deque_char(const std::string& path_file) {
    std::deque<char> deque;
    std::ifstream file(path_file);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }
    char c;
    while (file >> c) {
        deque.push_back(c);
    }
    file.close();
    return deque;
}

std::deque<int> data::load_deque_int(const std::string& path_file) {
    std::deque<int> deque;
    std::ifstream file(path_file);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }
    int num;
    while (file >> num) {
        deque.push_back(num);
    }
    file.close();
    return deque;
}

std::deque<double> data::load_deque_double(const std::string& path_file) {
    std::deque<double> deque;
    std::ifstream file(path_file);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }
    double num;
    while (file >> num) {
        deque.push_back(num);
    }
    file.close();
    return deque;
}

std::deque<std::string> data::load_deque_string(const std::string& path_file) {
    std::deque<std::string> deque;
    std::ifstream file(path_file);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file");
    }
    std::string str;
    while (file >> str) {
        deque.push_back(str);
    }
    file.close();
    return deque;
}
