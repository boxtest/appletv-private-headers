/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMAlternateMode : PBCodable {
	int _mode;	// 4 = 0x4
}
@property(assign, nonatomic) int mode;	// G=0x35ba2e71; S=0x35ba2e81; @synthesize=_mode
- (void)dealloc;	// 0x35ba2c69
- (id)description;	// 0x35ba2c95
- (id)dictionaryRepresentation;	// 0x35ba2d05
// declared property getter: - (int)mode;	// 0x35ba2e71
- (BOOL)readFrom:(id)from;	// 0x35ba2d75
// declared property setter: - (void)setMode:(int)mode;	// 0x35ba2e81
- (void)writeTo:(id)to;	// 0x35ba2e4d
@end

