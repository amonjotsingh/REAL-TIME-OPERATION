
  pthread_t THREAD1, THREAD2;
  pthread_attr_t TH1,TH2;
  pthread_attr_init(&TH1);
  pthread_attr_init(&TH2);
  sched_param param1,param2;
  pthrad_attr_getparam(&TH1,&param1);
  pthrad_attr_getparam(&TH2,&param2);
  param1.sched_priority = 1;
  param2.sched_priority = 2;
  pthread_attr_setparam(&TH1,&param1);
  pthread_attr_setparam(&TH1,&param1);

  
  



