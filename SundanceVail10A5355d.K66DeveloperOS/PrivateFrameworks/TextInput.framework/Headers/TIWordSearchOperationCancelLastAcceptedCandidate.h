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
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper;	// G=0x3722a815; S=0x3722a825; @synthesize=_mecabraWrapper
- (id)initWithWordSearch:(id)wordSearch;	// 0x3722a731
- (void)cancel;	// 0x3722a7e1
- (void)dealloc;	// 0x3722a795
// declared property getter: - (id)mecabraWrapper;	// 0x3722a815
- (void)perform;	// 0x3722a7e5
// declared property setter: - (void)setMecabraWrapper:(id)wrapper;	// 0x3722a825
@end
