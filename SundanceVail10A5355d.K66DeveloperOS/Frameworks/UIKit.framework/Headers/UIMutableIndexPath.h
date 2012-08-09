/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSIndexPath.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIMutableIndexPath : NSIndexPath {
	unsigned *_mutableIndexes;	// 20 = 0x14
	BOOL _locked;	// 24 = 0x18
}
+ (void)setIndex:(unsigned)index atPosition:(unsigned)position forIndexPath:(id *)indexPath;	// 0x33c335e1
- (id)initWithIndexes:(const unsigned *)indexes length:(unsigned)length;	// 0x33a68bd9
- (int)compare:(id)compare;	// 0x33c3352d
- (id)copyWithZone:(NSZone *)zone;	// 0x33c33659
- (void)dealloc;	// 0x33c334a5
- (id)description;	// 0x33c336b9
- (void)getIndexes:(unsigned *)indexes;	// 0x33c334ed
- (unsigned)indexAtPosition:(unsigned)position;	// 0x33a68c41
- (id)retain;	// 0x33c337ad
@end
