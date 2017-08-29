sed "s/原字符串包含'/替换字符串包含'/"
sed -i 's/*test.*$/test = "/root/test.log"/g' ${file_to_sed} 