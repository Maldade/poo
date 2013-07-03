#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Apolice.o \
	${OBJECTDIR}/Bo.o \
	${OBJECTDIR}/Classificacao.o \
	${OBJECTDIR}/Cliente.o \
	${OBJECTDIR}/Condutor.o \
	${OBJECTDIR}/Date.o \
	${OBJECTDIR}/GerenciarSegurados.o \
	${OBJECTDIR}/ListaApolice.o \
	${OBJECTDIR}/Marca.o \
	${OBJECTDIR}/Sinistro.o \
	${OBJECTDIR}/Terceiro.o \
	${OBJECTDIR}/TipoSinistro.o \
	${OBJECTDIR}/TipoVeiculo.o \
	${OBJECTDIR}/Veiculo.o \
	${OBJECTDIR}/mainApolice.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/poo.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/poo.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/poo ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Apolice.o: Apolice.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Apolice.o Apolice.cpp

${OBJECTDIR}/Bo.o: Bo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Bo.o Bo.cpp

${OBJECTDIR}/Classificacao.o: Classificacao.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Classificacao.o Classificacao.cpp

${OBJECTDIR}/Cliente.o: Cliente.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Cliente.o Cliente.cpp

${OBJECTDIR}/Condutor.o: Condutor.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Condutor.o Condutor.cpp

${OBJECTDIR}/Date.o: Date.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Date.o Date.cpp

${OBJECTDIR}/GerenciarSegurados.o: GerenciarSegurados.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/GerenciarSegurados.o GerenciarSegurados.cpp

${OBJECTDIR}/ListaApolice.o: ListaApolice.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/ListaApolice.o ListaApolice.cpp

${OBJECTDIR}/Marca.o: Marca.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Marca.o Marca.cpp

${OBJECTDIR}/Sinistro.o: Sinistro.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Sinistro.o Sinistro.cpp

${OBJECTDIR}/Terceiro.o: Terceiro.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Terceiro.o Terceiro.cpp

${OBJECTDIR}/TipoSinistro.o: TipoSinistro.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/TipoSinistro.o TipoSinistro.cpp

${OBJECTDIR}/TipoVeiculo.o: TipoVeiculo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/TipoVeiculo.o TipoVeiculo.cpp

${OBJECTDIR}/Veiculo.o: Veiculo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Veiculo.o Veiculo.cpp

${OBJECTDIR}/mainApolice.o: mainApolice.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/mainApolice.o mainApolice.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/poo.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
