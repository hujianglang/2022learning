--��ȡ

local function readFile(fileName)
	local f = assert(io.open(fileName,'r'))
	local content = f:read('*all')
	f:close()
	return content
end

print(readFile('test.txt'))

--д��

local function writeFile(fileName,content)
	local f = assert(io.open(fileName,'a')) --'w'����д��
	f:write(content)
	f:close()
end

writeFile('test.txt','\n5.Java')
