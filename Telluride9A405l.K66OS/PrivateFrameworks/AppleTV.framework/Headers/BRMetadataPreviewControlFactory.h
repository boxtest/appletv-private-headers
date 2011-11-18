/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <NSObject.h> // Unknown library


@interface BRMetadataPreviewControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
}
+ (id)factory;	// 0x35dda145
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x35dda17d
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x35dda285
@end

