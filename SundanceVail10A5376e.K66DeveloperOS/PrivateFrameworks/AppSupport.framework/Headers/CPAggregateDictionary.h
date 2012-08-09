/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library


@interface CPAggregateDictionary : NSObject {
}
@property(readonly, assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x366a3749; 
+ (id)sharedAggregateDictionary;	// 0x366a3635
- (void)addValue:(long long)value forKey:(id)key;	// 0x366a36d5
- (void)clearDistributionKey:(id)key;	// 0x366a3709
- (void)clearScalarKey:(id)key;	// 0x366a3681
- (int)commit;	// 0x366a3671
- (void)decrementKey:(id)key;	// 0x366a36bd
- (void)incrementKey:(id)key;	// 0x366a36a9
// declared property getter: - (BOOL)isEnabled;	// 0x366a3749
- (void)pushValue:(double)value forKey:(id)key;	// 0x366a3731
- (void)setValue:(double)value forDistributionKey:(id)distributionKey;	// 0x366a3719
- (void)setValue:(long long)value forScalarKey:(id)scalarKey;	// 0x366a3691
- (void)significantTimeChanged;	// 0x366a3661
- (void)subtractValue:(long long)value forKey:(id)key;	// 0x366a36ed
@end
