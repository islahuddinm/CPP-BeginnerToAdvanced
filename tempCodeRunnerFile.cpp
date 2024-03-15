Shape* shapes[] {&shape1,&ellipse1};
    for(auto &s : shapes){
        std::cout << "count : " << s->get_count() << std::endl;
    }