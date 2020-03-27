## 一. 启动
---
```C++
SessionManager::getRef().start();
```
创建完成端口

----
```C++
AccepterID aID = SessionManager::getRef().addAccepter(g_remoteIP, g_remotePort);
```
添加监听器，获得 AccepterID .
通过 AccepterID 可以 从 _mapAccepterOptions 获得 AccepterOptions .
```
std::unordered_map<AccepterID, AccepterOptions > _mapAccepterOptions;

struct SessionOptions 
{

    ProtoType       _protoType = PT_TCP;
    std::string     _rc4TcpEncryption = ""; //empty is not encryption 
    bool            _openFlashPolicy = false; //check falsh client  
    bool            _setNoDelay = true;
    bool            _floodSendOptimize = true;
    bool            _joinSmallBlock = true; //merge small block  
    unsigned int    _sessionPulseInterval = 30000;  
    unsigned int    _connectPulseInterval = 5000;  
    unsigned int    _reconnects = 0; // can reconnect count 
    bool            _reconnectClean = true;//clean unsend block . 
    unsigned int    _maxSendListCount = 600;
    /*
    检查tcp数据完整性。
    数据由两部分组成：
        头部 = 数据大小(Integer) + 协议号(ProtoInteger)
        尾部 = 数据体
    */
    OnBlockCheck _onBlockCheck;
    /*
    接收到的 tcp 数据处理函数。
    */
    OnBlockDispatch _onBlockDispatch;
    /*
    检查http数据完整性，并解析数据返回 mesthod 等元数据。
    */
    OnHTTPBlockCheck _onHTTPBlockCheck;
    /*
    接收到的 http 数据处理函数。
    */
    OnHTTPBlockDispatch _onHTTPBlockDispatch;
    OnSessionEvent _onReconnectEnd;
    OnSessionEvent _onSessionClosed;
    /*
    网络链接成功的回调函数。
    */
    OnSessionEvent _onSessionLinked;
    OnSessionEvent _onSessionPulse;

    CreateBlock _createBlock ;
    FreeBlock _freeBlock;

};

struct AccepterOptions
{
    AccepterID _aID = InvalidAccepterID;    // AccepterID ，也就是 addAccepter 的返回值
    TcpAcceptPtr _accepter;
    std::string        _listenIP;           // 监听地址
    unsigned short    _listenPort = 0;      // 监听端口
    bool            _setReuse = true;
    unsigned int    _maxSessions = 5000;
    std::vector<std::string> _whitelistIP;
    unsigned long long _totalAcceptCount = 0;
    unsigned long long _currentLinked = 0;
    bool _closed = false;
    SessionOptions _sessionOptions;
};
```