/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OABShapeBaseManager.h"
#import "OABPropertiesManager.h"


__attribute__((visibility("hidden")))
@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
@private
	EshShape *mShape;	// 20 = 0x14
}
- (id)initWithShape:(EshShape *)shape;	// 0x356f2825
- (id)initWithShape:(EshShape *)shape masterShape:(EshShape *)shape2;	// 0x354ebd51
- (BOOL)hidden;	// 0x35564505
- (BOOL)isFillOK;	// 0x355a8179
- (BOOL)isFilled;	// 0x354ec8c9
- (BOOL)isShadowOK;	// 0x3562e9a1
- (BOOL)isShadowed;	// 0x3555e435
- (BOOL)isStrokeOK;	// 0x355a7d8d
- (BOOL)isStroked;	// 0x3555d755
- (BOOL)isTextPath;	// 0x3555bab5
- (BOOL)textPathBold;	// 0x35660b15
- (id)textPathFontFamily;	// 0x356609e9
- (long)textPathFontSize;	// 0x35660aa1
- (BOOL)textPathItalic;	// 0x35660b89
- (BOOL)textPathSmallcaps;	// 0x35660bfd
- (BOOL)textPathStrikethrough;	// 0x357ddc21
- (int)textPathTextAlignment;	// 0x35660499
- (BOOL)textPathUnderline;	// 0x357ddc71
- (id)textPathUnicodeString;	// 0x35660521
@end

