// -*- c++ -*-
// (c) 2006,2007,2008 Ulrich Germann
// #ifndef __num_read_write_hh
// #define __num_read_write_hh
#pragma once
#include <stdint.h>
#include <iostream>
// #include <endian.h>
// #include <byteswap.h>
// #include "tpt_typedefs.h"

namespace ugdiss {

  void numwrite(std::ostream& out, uint16_t const& x);
  void numwrite(std::ostream& out, uint32_t const& x);
  void numwrite(std::ostream& out, uint64_t const& x);
    
  char const* numread(char const* src, uint16_t & x);
  char const* numread(char const* src, uint32_t & x);
  char const* numread(char const* src, uint64_t & x);
  
// template<typename uintNumber>
// void
// numwrite(std::ostream& out, uintNumber const& x)
// {
//   uchar const* c = reinterpret_cast<uchar const*>(&x);
//   for (size_t i = 0; i < sizeof(x); ++i)
//     out.write(c
// #if __BYTE_ORDER == __BIG_ENDIAN
//   uintNumber y;
//   switch (sizeof(uintNumber))
//     {
//     case 2: y = bswap_16(x); break;
//     case 4: y = bswap_32(x); break;
//     case 8: y = bswap_64(x); break;
//     default: y = x;
//     }
//   out.write(reinterpret_cast<char*>(&y),sizeof(y));
// #else
//   out.write(reinterpret_cast<char const*>(&x),sizeof(x));
// #endif
// }

// template<typename uintNumber>
// void
// numread(std::istream& in, uintNumber& x)
// {
//   in.read(reinterpret_cast<char*>(&x),sizeof(uintNumber));
// #if __BYTE_ORDER == __BIG_ENDIAN
//   switch (sizeof(uintNumber))
//     {
//     case 2: x = bswap_16(x); break;
//     case 4: x = bswap_32(x); break;
//     case 8: x = bswap_64(x); break;
//     default: break;
//     }
// #endif  
// }

// template<typename uintNumber>
// char const*
// numread(char const* src, uintNumber& x)
// {
//   // ATTENTION: THIS NEEDS TO BE VERIFIED FOR BIG-ENDIAN MACHINES!!!
//   x = *reinterpret_cast<uintNumber const*>(src);
// #if __BYTE_ORDER == __BIG_ENDIAN
//   switch (sizeof(uintNumber))
//     {
//     case 2: x = bswap_16(x); break;
//     case 4: x = bswap_32(x); break;
//     case 8: x = bswap_64(x); break;
//     default: break;
//     }
// #endif  
//   return src+sizeof(uintNumber);
// }
} // end of namespace ugdiss
//#endif
