/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOResourceIdentifier : NSObject {
	NSString *_name;	// 4 = 0x4
	int _type;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *name;	// G=0x33fdaa85; S=0x33fdaa99; @synthesize=_name
@property(assign, nonatomic) int type;	// G=0x33fdaaa9; S=0x33fdaab9; @synthesize=_type
- (void)dealloc;	// 0x33fda899
- (id)description;	// 0x33fda9c5
- (unsigned)hash;	// 0x33fda98d
- (BOOL)isEqual:(id)equal;	// 0x33fda8e5
// declared property getter: - (id)name;	// 0x33fdaa85
// declared property setter: - (void)setName:(id)name;	// 0x33fdaa99
// declared property setter: - (void)setType:(int)type;	// 0x33fdaab9
// declared property getter: - (int)type;	// 0x33fdaaa9
@end

