/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, AVMetadataObjectInternal;

@interface AVMetadataObject : NSObject {
	AVMetadataObjectInternal *_objectInternal;	// 4 = 0x4
}
@property(readonly, assign) CGRect bounds;	// G=0x3693bf41; 
@property(readonly, assign) XXStruct_pwHToB duration;	// G=0x3693bf09; 
@property(readonly, assign) XXStruct_pwHToB time;	// G=0x3693bed1; 
@property(readonly, assign) NSString *type;	// G=0x3693bf75; 
- (id)init;	// 0x3693bd85
// declared property getter: - (CGRect)bounds;	// 0x3693bf41
- (void)dealloc;	// 0x3693be85
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x3693bf09
- (id)input;	// 0x3693bf95
// declared property getter: - (XXStruct_pwHToB)time;	// 0x3693bed1
// declared property getter: - (id)type;	// 0x3693bf75
@end
