/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PBParagraphProperties : NSObject {
}
+ (int)pptAlignmentTypeWithOADTextAlignType:(int)oadtextAlignType;	// 0x34590801
+ (int)pptFontAlignWithOADTextFontAlign:(int)oadtextFontAlign;	// 0x3459082d
+ (short)pptTextSpacingWithOADParaSpacing:(id)oadparaSpacing defaultPptParaSpacing:(short)spacing;	// 0x34590841
+ (void)readAlign:(id)align pptAlignmentType:(int)type;	// 0x343f4c75
+ (void)readParagraphProperties:(id)properties paragraphProperty:(PptParaProperty *)property bulletStyle:(PptParaProperty9 *)style isMaster:(BOOL)master state:(id)state;	// 0x343f4179
+ (void)readParagraphProperties:(id)properties paragraphPropertyRun:(PptParaRun *)run bulletStyle:(PptParaProperty9 *)style state:(id)state;	// 0x343f4109
@end

