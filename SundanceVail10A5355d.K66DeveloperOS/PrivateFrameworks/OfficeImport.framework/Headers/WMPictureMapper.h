/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDrawableMapper.h"

@class WDPicture;

@interface WMPictureMapper : CMDrawableMapper {
	WDPicture *wdPicture;	// 80 = 0x50
}
- (id)initWithWDPicture:(id)wdpicture parent:(id)parent;	// 0x31c86fb5
- (void)mapAt:(id)at withState:(id)state;	// 0x31c87115
- (void)mapBounds;	// 0x31c87291
- (void)setBoundingBox;	// 0x31c87085
@end
