import hashlib

for year in range(1950, 2016):
    for month in range(01, 12):
        for day in range(01, 31):
            if month < 10:
                month = "0" + str(month)
            if day < 10:
                day = "0" + str(day)
            date = str(year) + str(month) + str(day)
            m2 = hashlib.md5()
            m2.update(date)
            if m2.hexdigest().upper() == '7E38890B870934B126F66857ED6B57B9':
                print date
                exit(0)
