mex -R2018a -lsqlite3 -lcurl makeConstraint.cpp ../DataPoint.cpp ../SunriseSunsetData.cpp ../MBCFunctions.cpp;
mex andConstraint.cpp;
mex orConstraint.cpp;
mex notConstraint.cpp;
mex -lsqlite3 -lcurl selectDatapoints.cpp ../DataPoint.cpp ../SunriseSunsetData.cpp ../MBCFunctions.cpp
mex -lsqlite3 -lcurl getSunData.cpp ../DataPoint.cpp ../SunriseSunsetData.cpp ../MBCFunctions.cpp