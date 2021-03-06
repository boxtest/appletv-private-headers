/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIWordSearchOperation.h"

@class TIMecabraWrapper;

@interface TIWordSearchOperationCancelLastAcceptedCandidate : TIWordSearchOperation {
	TIMecabraWrapper *_mecabraWrapper;	// 12 = 0xc
}
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper;	// G=0x35b8ebe1; S=0x35b8ebf1; @synthesize=_mecabraWrapper
- (id)initWithWordSearch:(id)wordSearch;	// 0x35b8eafd
- (void)cancel;	// 0x35b8ebad
- (void)dealloc;	// 0x35b8eb61
// declared property getter: - (id)mecabraWrapper;	// 0x35b8ebe1
- (void)perform;	// 0x35b8ebb1
// declared property setter: - (void)setMecabraWrapper:(id)wrapper;	// 0x35b8ebf1
@end

