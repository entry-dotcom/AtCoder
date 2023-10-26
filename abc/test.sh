# AtCoder問題番号 ディレクトリをまとめて作成
<<comment_out

for ((i=323; i<351; i++))
do
    mkdir -p $i/cpp
    mkdir -p $i/py
    #rmdir $i/$py
done


for ((i=323; i<351; i++))
do
    mv $i/cpp/template.cpp a.cpp
    #cp template.cpp $i/cpp/a.cpp
    
    #rmdir $i/$py
    cp $i/cpp/a.cpp $i/cpp/b.cpp
    cp $i/cpp/a.cpp $i/cpp/c.cpp
    cp $i/cpp/a.cpp $i/cpp/d.cpp
done
comment_out
