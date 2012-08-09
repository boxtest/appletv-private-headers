/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface TIZephyrCandidate : XXUnknownSuperclass {
	unsigned _wordOriginFeedbackID;	// 20 = 0x14
	BOOL extensionCandidate;	// 24 = 0x18
}
@property(assign, nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;	// G=0x3463381d; S=0x3463382d; @synthesize
@property(readonly, assign) unsigned wordOriginFeedbackID;	// G=0x34633731; converted property
- (id)initWithCandidate:(id)candidate forInput:(id)input wordOriginFeedbackID:(unsigned)anId;	// 0x346336ed
- (id)initWithCandidate:(id)candidate wordOriginFeedbackID:(unsigned)anId;	// 0x346336cd
- (id)copyWithZone:(NSZone *)zone;	// 0x3463379d
- (BOOL)isAutocorrection;	// 0x34633741
// declared property getter: - (BOOL)isExtensionCandidate;	// 0x3463381d
// declared property setter: - (void)setExtensionCandidate:(BOOL)candidate;	// 0x3463382d
// converted property getter: - (unsigned)wordOriginFeedbackID;	// 0x34633731
@end
