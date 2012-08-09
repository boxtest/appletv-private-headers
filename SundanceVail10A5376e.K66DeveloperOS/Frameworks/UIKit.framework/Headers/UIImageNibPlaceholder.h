/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImage.h"
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIImageNibPlaceholder : UIImage <NSCoding> {
	NSString *runtimeResourceName;	// 36 = 0x24
}
- (id)initWithCoder:(id)coder;	// 0x303b4aa5
- (id)initWithContentsOfFile:(id)file andRuntimeResourceName:(id)name;	// 0x3049b6b9
- (id)initWithData:(id)data andRuntimeResourceName:(id)name;	// 0x3049b70d
- (void)dealloc;	// 0x303b6a81
- (void)encodeWithCoder:(id)coder;	// 0x3049b761
@end
