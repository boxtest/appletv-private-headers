/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSMutableSet, NSTimer;

__attribute__((visibility("hidden")))
@interface BRPreferenceManager : XXUnknownSuperclass {
	NSLock *_preferencesLock;	// 4 = 0x4
	NSTimer *_prefsSyncTimer;	// 8 = 0x8
	NSMutableSet *_domains;	// 12 = 0xc
}
+ (id)sharedPreferences;	// 0x3b3135
- (id)init;	// 0x3b317d
- (void)_applicationTerminating:(id)terminating;	// 0x3b3dbd
- (void)_backgroundTasksSuspending:(id)suspending;	// 0x3b3e81
- (void)_diskWillBeFlushed:(id)_disk;	// 0x3b3f45
- (void)_flushPreferences:(id)preferences;	// 0x3b3c79
- (void)_markPreferencesAsDirty;	// 0x3b3ab9
- (void)_setValue:(id)value forKey:(id)key forDomain:(id)domain;	// 0x3b3875
- (void)_synchronizeDomains;	// 0x3b4021
- (id)_valueForKey:(id)key forDomain:(id)domain;	// 0x3b39b1
- (BOOL)boolForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x3b3511
- (BOOL)canSetPreferencesForKey:(id)key forDomain:(id)domain;	// 0x3b35b9
- (void)dealloc;	// 0x3b32bd
- (id)descriptionForKey:(id)key forDomain:(id)domain;	// 0x3b3591
- (double)doubleForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(double)missingPrefs;	// 0x3b347d
- (float)floatForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(float)missingPrefs;	// 0x3b33e9
- (int)integerForKey:(id)key forDomain:(id)domain withValueForMissingPrefs:(int)missingPrefs;	// 0x3b335d
- (id)objectForKey:(id)key forDomain:(id)domain;	// 0x3b334d
- (BOOL)setBool:(BOOL)aBool forKey:(id)key forDomain:(id)domain;	// 0x3b3745
- (BOOL)setDouble:(double)aDouble forKey:(id)key forDomain:(id)domain;	// 0x3b36c5
- (BOOL)setFloat:(float)aFloat forKey:(id)key forDomain:(id)domain;	// 0x3b3649
- (BOOL)setInteger:(int)integer forKey:(id)key forDomain:(id)domain;	// 0x3b35d1
- (BOOL)setObject:(id)object forKey:(id)key forDomain:(id)domain;	// 0x3b37bd
- (id)stringForKey:(id)key forDomain:(id)domain;	// 0x3b3535
- (void)syncDomain:(id)domain;	// 0x3b3815
@end
