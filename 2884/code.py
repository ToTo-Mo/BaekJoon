hour,minute = [int(i) for i in input().split()]
hour,minute = divmod((hour * 60 + minute - 45),60)
print(23 if hour < 0 else hour, minute)