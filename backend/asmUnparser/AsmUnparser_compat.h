/* Old functions for backward compatitility, reimplemented in terms of AsmUnparser. */
#ifndef ROSE_ASM_UNPARSER_COMPAT_H
#define ROSE_ASM_UNPARSER_COMPAT_H

#include "AsmUnparser.h"

/** Returns the string representation of an assembly instruction, sans address. */
std::string unparseInstruction(SgAsmInstruction*, const AsmUnparser::LabelMap *labels=NULL);

/** Returns the string representation of an assembly instruction with address. */
std::string unparseInstructionWithAddress(SgAsmInstruction*, const AsmUnparser::LabelMap *labels=NULL);

/** Returns a string representing the part of the assembly instruction before the first operand. */
std::string unparseMnemonic(SgAsmInstruction*);

/** Returns the string representation of an instruction operand (SgAsmExpression), the format of which might depend on the
 *  instruction with which it's associated. */
std::string unparseExpression(SgAsmExpression*, const AsmUnparser::LabelMap *labels=NULL);

std::string unparseAsmStatement(SgAsmStatement*);

void unparseAsmStatementToFile(const std::string& filename, SgAsmStatement*);

std::string unparseAsmInterpretation(SgAsmInterpretation*);

/*-------------------------------------------------------------------------------------------------------------------------------
 * X86
 *-------------------------------------------------------------------------------------------------------------------------------*/

std::string unparseX86Mnemonic(SgAsmx86Instruction*);
std::string unparseX86Expression(SgAsmExpression*, const AsmUnparser::LabelMap*);
std::string unparseX86Expression(SgAsmExpression*, const AsmUnparser::LabelMap*, bool leaMode);
std::string unparseX86Register(const RegisterDescriptor&);

/*-------------------------------------------------------------------------------------------------------------------------------
 * ARM
 *-------------------------------------------------------------------------------------------------------------------------------*/
enum ArmSignForExpressionUnparsing 
{
  arm_sign_none,
  arm_sign_plus,
  arm_sign_minus
} ;

std::string unparseArmMnemonic(SgAsmArmInstruction*);
std::string unparseArmExpression(SgAsmExpression*, const AsmUnparser::LabelMap*);

/*-------------------------------------------------------------------------------------------------------------------------------
 * PowerPC
 *-------------------------------------------------------------------------------------------------------------------------------*/

std::string unparsePowerpcMnemonic(SgAsmPowerpcInstruction*);
std::string unparsePowerpcExpression(SgAsmExpression*, const AsmUnparser::LabelMap*);

#endif
