/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "StoreServices-Structs.h"

@class NSString;

@interface SSProtocolConditionalContext : NSObject <NSCopying> {
@private
	id _itemLookupBlock;	// 4 = 0x4
	NSString *_platformName;	// 8 = 0x8
	NSString *_systemVersion;	// 12 = 0xc
}
@property(copy, nonatomic) id itemLookupBlock;	// G=0x341f9311; S=0x341f9321; @synthesize=_itemLookupBlock
@property(copy, nonatomic) NSString *platformName;	// G=0x341f9345; S=0x341f9355; @synthesize=_platformName
@property(copy, nonatomic) NSString *systemVersion;	// G=0x341f9379; S=0x341f9389; @synthesize=_systemVersion
- (id)copyWithZone:(NSZone *)zone;	// 0x341f926d
- (void)dealloc;	// 0x341f91f9
// declared property getter: - (id)itemLookupBlock;	// 0x341f9311
// declared property getter: - (id)platformName;	// 0x341f9345
// declared property setter: - (void)setItemLookupBlock:(id)block;	// 0x341f9321
// declared property setter: - (void)setPlatformName:(id)name;	// 0x341f9355
// declared property setter: - (void)setSystemVersion:(id)version;	// 0x341f9389
// declared property getter: - (id)systemVersion;	// 0x341f9379
@end

