/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVWeakReference.h"

@class NSString;

@interface AVGarbageCollectedWeakReference : AVWeakReference {
	id _referencedObject;	// 4 = 0x4
	NSString *_cachedReferencedObjectDescription;	// 8 = 0x8
}
@property(readonly, retain) id referencedObject;	// G=0x34241e7d; converted property
- (id)init;	// 0x34241e09
- (id)initWithReferencedObject:(id)referencedObject;	// 0x34241cd5
- (id)description;	// 0x34241e1d
// converted property getter: - (id)referencedObject;	// 0x34241e7d
@end

