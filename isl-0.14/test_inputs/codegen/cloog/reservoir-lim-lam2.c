{
  for (int c1 = 1; c1 <= M; c1 += 1)
    S1(c1);
  for (int c1 = 1; c1 <= M; c1 += 1)
    for (int c3 = 2; c3 <= N; c3 += 1)
      S2(c1, c3);
  for (int c1 = 1; c1 <= M; c1 += 1)
    for (int c3 = 1; c3 < N; c3 += 1)
      S3(c1, c3);
}
