/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarItem : NSObject {
	int _type;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *indicatorName;	// G=0x30a2858d; @dynamic
@property(readonly, assign, nonatomic) int leftOrder;	// G=0x308b9959; @dynamic
@property(readonly, assign, nonatomic) int priority;	// G=0x308f68b1; @dynamic
@property(readonly, assign, nonatomic) int rightOrder;	// G=0x308b9999; @dynamic
@property(readonly, assign, nonatomic) int type;	// G=0x308f6685; @synthesize=_type
@property(readonly, assign, nonatomic) Class viewClass;	// G=0x3090a0c1; @dynamic
+ (BOOL)itemType:(int)type appearsInRegion:(int)region;	// 0x30bd15dd
+ (BOOL)itemType:(int)type canBeEnabledForData:(id)data style:(int)style;	// 0x308b9185
+ (id)itemWithType:(int)type;	// 0x308b985d
+ (BOOL)typeIsValid:(int)valid;	// 0x308b98c5
- (id)initWithType:(int)type;	// 0x30909ee9
- (BOOL)appearsInRegion:(int)region;	// 0x308b98d1
- (BOOL)appearsOnLeft;	// 0x308b993d
- (BOOL)appearsOnRight;	// 0x308b997d
- (int)compareLeftOrder:(id)order;	// 0x308ba9f5
- (int)comparePriority:(id)priority;	// 0x308f6879
- (int)compareRightOrder:(id)order;	// 0x308f4fc9
- (id)description;	// 0x30bd161d
// declared property getter: - (id)indicatorName;	// 0x30a2858d
// declared property getter: - (int)leftOrder;	// 0x308b9959
// declared property getter: - (int)priority;	// 0x308f68b1
// declared property getter: - (int)rightOrder;	// 0x308b9999
// declared property getter: - (int)type;	// 0x308f6685
// declared property getter: - (Class)viewClass;	// 0x3090a0c1
@end
