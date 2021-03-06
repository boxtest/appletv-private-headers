/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRPreferences : XXUnknownSuperclass {
	NSString *_domain;	// 4 = 0x4
}
@property(readonly, retain) NSString *domain;	// G=0x38c69d; converted property
+ (id)sharedFrontRowPreferences;	// 0x38cccd
- (id)initWithDomain:(id)domain;	// 0x38c5f9
- (BOOL)boolForKey:(id)key;	// 0x38c91d
- (BOOL)boolForKey:(id)key withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x38c96d
- (BOOL)canSetPreferencesForKey:(id)key;	// 0x38ca4d
- (void)dealloc;	// 0x38c651
- (id)descriptionForKey:(id)key;	// 0x38ca05
// converted property getter: - (id)domain;	// 0x38c69d
- (double)doubleForKey:(id)key;	// 0x38c879
- (double)doubleForKey:(id)key withValueForMissingPrefs:(double)missingPrefs;	// 0x38c8c9
- (float)floatForKey:(id)key;	// 0x38c7d9
- (float)floatForKey:(id)key withValueForMissingPrefs:(float)missingPrefs;	// 0x38c829
- (int)integerForKey:(id)key;	// 0x38c739
- (int)integerForKey:(id)key withValueForMissingPrefs:(int)missingPrefs;	// 0x38c789
- (BOOL)isLoggingEnabledForKey:(id)key;	// 0x38cc29
- (id)logFilePathsForKey:(id)key;	// 0x38cc55
- (id)objectForKey:(id)key;	// 0x38c6f1
- (BOOL)setBool:(BOOL)aBool forKey:(id)key;	// 0x38cb89
- (BOOL)setDouble:(double)aDouble forKey:(id)key;	// 0x38cb35
- (BOOL)setFloat:(float)aFloat forKey:(id)key;	// 0x38cae5
- (BOOL)setInteger:(int)integer forKey:(id)key;	// 0x38ca95
- (BOOL)setObject:(id)object forKey:(id)key;	// 0x38cbd9
- (id)stringForKey:(id)key;	// 0x38c9bd
- (void)syncNow;	// 0x38c6ad
@end

