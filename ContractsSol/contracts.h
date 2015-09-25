#ifndef CONTRACTS_H
#define CONTRACTS_H
/*
 * Copyright SciSpike
 *
 * Implementation file for the contract macros
 */

#ifdef CONTRACTS
#include <iostream>
#include <cstdlib>
using namespace std;
#endif

/*
 * The pre condition macros
 */
#ifdef CONTRACTS
#define PRE_CONDITIONS(c) ( (c) ? (void)0 : (void)( cerr <<    \
        "Precondition failed: " #c ", file " << __FILE__ << \
        ", Line " << __LINE__ << endl, abort() ) )
#else
#define PRE_CONDITIONS( c )
#endif

/*
 * The postcondition macros
 */
#ifdef CONTRACTS
#define POST_CONDITIONS(c) ( (c) ? (void)0 : (void)( cerr <<    \
	    "Postcondition failed: " #c << ", file " << __FILE__ << \
        ", Line " << __LINE__ << endl, abort() ) )
#else
#define POST_CONDITIONS( c )
#endif

/*
 * The remember macro
 */
#ifdef CONTRACTS
#define REMEMBER(type, var) type OLD_var = var
#else
#define REMEMBER(type, var)
#endif

/*
 * The old macro
 */
#ifdef CONTRACTS
#define OLD(var) OLD_var
#else
#define OLD(var)
#endif

#endif // CONTRACTS_H
