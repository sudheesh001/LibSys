//

//------------------------------------------------------------------------------
#ifndef LuaTmrManLibH
#define LuaTmrManLibH
//------------------------------------------------------------------------------

#if LUA_VERSION_NUM > 501
    int RegTmrMan(lua_State *L);
#else
    void RegTmrMan(lua_State * L);
#endif
//------------------------------------------------------------------------------

#endif