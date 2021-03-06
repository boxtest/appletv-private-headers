/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVWeakReference.h"

@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference {
@private
	NSString *_cachedReferencedObjectDescription;	// 4 = 0x4
	id _weakStorage;	// 8 = 0x8
}
- (id)init;	// 0x354a5811
- (id)initWithReferencedObject:(id)referencedObject;	// 0x354a5825
- (void)dealloc;	// 0x354a57b1
- (id)description;	// 0x354a5751
- (id)referencedObject;	// 0x354a573d
@end

