//

//------------------------------------------------------------------------------
#ifndef LuaUDPDbgLibH
#define LuaUDPDbgLibH
//------------------------------------------------------------------------------

#if LUA_VERSION_NUM > 501
    int RegUDPDbg(lua_State *L);
#else
    void RegUDPDbg(lua_State * L);
#endif
//------------------------------------------------------------------------------

#endif
