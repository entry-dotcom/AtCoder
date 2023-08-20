# AtCoder問題番号 ディレクトリをまとめて作成
<<comment_out
for ((i=206; i<208; i++))
do
    mkdir -p $i/cpp
    mkdir -p $i/py
    #rmdir $i/$py
done


for ((i=206; i<208; i++))
do
    cp template.cpp $i/cpp/a.cpp
    #mv $i/cpp/template.cpp a.cpp
    #rmdir $i/$py
    cp $i/cpp/a.cpp $i/cpp/b.cpp
    cp $i/cpp/a.cpp $i/cpp/c.cpp
    cp $i/cpp/a.cpp $i/cpp/d.cpp
done
comment_out