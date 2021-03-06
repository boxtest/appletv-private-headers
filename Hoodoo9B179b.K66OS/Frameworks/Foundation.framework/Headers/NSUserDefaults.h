/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSUserDefaults.h> // Unknown library


@interface NSUserDefaults (NSKeyValueCoding)
- (void)setValue:(id)value forKey:(id)key;	// 0x3107fd4d
- (id)valueForKey:(id)key;	// 0x310208f5
@end

@interface NSUserDefaults (NSUserDefaults)
@property(retain) id searchList;	// G=0x310a6c6d; S=0x310a6c95; converted property
+ (void)resetStandardUserDefaults;	// 0x310a6da1
+ (void)setStandardUserDefaults:(id)defaults;	// 0x310a6d29
+ (id)standardUserDefaults;	// 0x31002895
- (id)init;	// 0x310a6ce9
- (id)initWithUser:(id)user;	// 0x31022ed1
- (id)URLForKey:(id)key;	// 0x310a6a71
- (void)addSuiteNamed:(id)named;	// 0x310a6cc1
- (id)arrayForKey:(id)key;	// 0x31034551
- (BOOL)boolForKey:(id)key;	// 0x31002a1d
- (id)dataForKey:(id)key;	// 0x310a6981
- (id)dictionaryForKey:(id)key;	// 0x310a6945
- (id)dictionaryRepresentation;	// 0x310a6c41
- (double)doubleForKey:(id)key;	// 0x310319e5
- (float)floatForKey:(id)key;	// 0x310337bd
- (int)integerForKey:(id)key;	// 0x31021021
- (long long)longForKey:(id)key;	// 0x310a69bd
- (id)objectForKey:(id)key;	// 0x31002b35
- (id)objectForKey:(id)key inDomain:(id)domain;	// 0x310a66b9
- (BOOL)objectIsForcedForKey:(id)key;	// 0x310a7145
- (BOOL)objectIsForcedForKey:(id)key inDomain:(id)domain;	// 0x310a7161
- (id)persistentDomainForName:(id)name;	// 0x31007b51
- (id)persistentDomainNames;	// 0x310a6f15
- (void)registerDefaults:(id)defaults;	// 0x31028b59
- (oneway void)release;	// 0x310094cd
- (void)removeObjectForKey:(id)key;	// 0x310093a9
- (void)removeObjectForKey:(id)key inDomain:(id)domain;	// 0x310a6921
- (void)removePersistentDomainForName:(id)name;	// 0x310a7131
- (void)removeSuiteNamed:(id)named;	// 0x310a6cd5
- (void)removeVolatileDomainForName:(id)name;	// 0x310a6ec5
// converted property getter: - (id)searchList;	// 0x310a6c6d
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x3100953d
- (void)setDouble:(double)aDouble forKey:(id)key;	// 0x3103bbad
- (void)setFloat:(float)aFloat forKey:(id)key;	// 0x3103bbe9
- (void)setInteger:(int)integer forKey:(id)key;	// 0x3103bc29
- (void)setLong:(long long)aLong forKey:(id)key;	// 0x310a6b49
- (void)setObject:(id)object forKey:(id)key;	// 0x31009409
- (void)setObject:(id)object forKey:(id)key inDomain:(id)domain;	// 0x310a67b1
- (void)setPersistentDomain:(id)domain forName:(id)name;	// 0x310a6fe9
// converted property setter: - (void)setSearchList:(id)list;	// 0x310a6c95
- (void)setURL:(id)url forKey:(id)key;	// 0x310a6b85
- (void)setVolatileDomain:(id)domain forName:(id)name;	// 0x310a6e75
- (id)stringArrayForKey:(id)key;	// 0x310335e1
- (id)stringForKey:(id)key;	// 0x31033755
- (BOOL)synchronize;	// 0x310208d9
- (id)volatileDomainForName:(id)name;	// 0x310a6e49
- (id)volatileDomainNames;	// 0x310a6e1d
@end

@interface NSUserDefaults (NSUserDefaults_NSURLExtras)
+ (void)_ensureAndLockPreferredLanguageLock;	// 0x310b6219
+ (void)_web_addDefaultsChangeObserver;	// 0x310b62e9
+ (void)_web_defaultsDidChange;	// 0x310b6295
+ (id)_web_preferredLanguageCode;	// 0x310b639d
@end

