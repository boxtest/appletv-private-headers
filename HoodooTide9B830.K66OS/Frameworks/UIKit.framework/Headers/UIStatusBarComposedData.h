/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarComposedData : NSObject {
@private
	XXStruct_rfflIA _rawData;	// 4 = 0x4
	BOOL _itemEnabled[23];	// 2068 = 0x814
	NSString *_doubleHeightStatus;	// 2092 = 0x82c
}
@property(copy, nonatomic) NSString *doubleHeightStatus;	// G=0x303aa78d; S=0x3002cb3d; @synthesize=_doubleHeightStatus
@property(readonly, assign, nonatomic) XXStruct_rfflIA *rawData;	// G=0x3002cba1; 
- (id)initWithRawData:(XXStruct_rfflIA)rawData;	// 0x3002bb19
- (void)dealloc;	// 0x3002f80d
// declared property getter: - (id)doubleHeightStatus;	// 0x303aa78d
- (BOOL)isItemEnabled:(int)enabled;	// 0x3002cfdd
// declared property getter: - (XXStruct_rfflIA *)rawData;	// 0x3002cba1
// declared property setter: - (void)setDoubleHeightStatus:(id)status;	// 0x3002cb3d
- (void)setItem:(int)item enabled:(BOOL)enabled;	// 0x3002cbb1
@end
