/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface BRPreferences : NSObject {
@private
	NSString *_domain;	// 4 = 0x4
}
@property(readonly, retain) NSString *domain;	// G=0x35ed10a5; converted property
+ (id)sharedFrontRowPreferences;	// 0x35ed16d5
- (id)initWithDomain:(id)domain;	// 0x35ed1001
- (BOOL)boolForKey:(id)key;	// 0x35ed1329
- (BOOL)boolForKey:(id)key withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x35ed1379
- (BOOL)canSetPreferencesForKey:(id)key;	// 0x35ed1459
- (void)dealloc;	// 0x35ed1059
- (id)descriptionForKey:(id)key;	// 0x35ed1411
// converted property getter: - (id)domain;	// 0x35ed10a5
- (double)doubleForKey:(id)key;	// 0x35ed1281
- (double)doubleForKey:(id)key withValueForMissingPrefs:(double)missingPrefs;	// 0x35ed12d1
- (float)floatForKey:(id)key;	// 0x35ed11e1
- (float)floatForKey:(id)key withValueForMissingPrefs:(float)missingPrefs;	// 0x35ed1231
- (int)integerForKey:(id)key;	// 0x35ed1141
- (int)integerForKey:(id)key withValueForMissingPrefs:(int)missingPrefs;	// 0x35ed1191
- (BOOL)isLoggingEnabledForKey:(id)key;	// 0x35ed1635
- (id)logFilePathsForKey:(id)key;	// 0x35ed1665
- (id)objectForKey:(id)key;	// 0x35ed10f9
- (BOOL)setBool:(BOOL)aBool forKey:(id)key;	// 0x35ed1595
- (BOOL)setDouble:(double)aDouble forKey:(id)key;	// 0x35ed1541
- (BOOL)setFloat:(float)aFloat forKey:(id)key;	// 0x35ed14f1
- (BOOL)setInteger:(int)integer forKey:(id)key;	// 0x35ed14a1
- (BOOL)setObject:(id)object forKey:(id)key;	// 0x35ed15e5
- (id)stringForKey:(id)key;	// 0x35ed13c9
- (void)syncNow;	// 0x35ed10b5
@end

