/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSDictionary, ISPropertyListProvider;

@interface ISProcessPropertyListOperation : ISOperation {
	ISPropertyListProvider *_dataProvider;	// 60 = 0x3c
	NSDictionary *_propertyList;	// 64 = 0x40
}
@property(retain) ISPropertyListProvider *dataProvider;	// G=0x33c88581; S=0x33c88595; @synthesize=_dataProvider
- (id)initWithPropertyList:(id)propertyList;	// 0x33c8842d
// declared property getter: - (id)dataProvider;	// 0x33c88581
- (void)dealloc;	// 0x33c8849d
- (void)run;	// 0x33c88515
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x33c88595
@end

