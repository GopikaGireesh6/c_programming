do{
        printf("1 for enqueue\n2for dequeue\n 3 for display\n");
        printf("enter the option:");
        scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        enqueue();
        break;
        case 2:
        dequeue();
        break;
        case 3:
        display();
        break;
        default:
        break;
  }
}