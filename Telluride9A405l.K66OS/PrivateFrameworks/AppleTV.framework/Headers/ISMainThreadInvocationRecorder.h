/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISInvocationRecorder.h"


__attribute__((visibility("hidden")))
@interface ISMainThreadInvocationRecorder : ISInvocationRecorder {
@private
	BOOL _waitUntilDone;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL waitUntilDone;	// G=0x35f34aad; S=0x35f34abd; @synthesize=_waitUntilDone
- (void)invokeInvocation:(id)invocation;	// 0x35f34a5d
// declared property setter: - (void)setWaitUntilDone:(BOOL)done;	// 0x35f34abd
// declared property getter: - (BOOL)waitUntilDone;	// 0x35f34aad
@end

