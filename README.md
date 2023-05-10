# Hay Day do Evandro
Segundo trabalho de ED de 2022/2023

## Contexto
<div align="center">

</div>
<br>
FarmKraft é um jogo de simulação agrícola. Em uma fazenda são plantados morangos,
cebolas, repolhos, cenouras e abóboras, além das eventuais ervas daninhas. A lavoura pode ser
atacada por pragas, pode ser tratada com defensivos e pode ser melhorada com adubos.
Eventualmente, as plantações são colhidas e suas produções são contabilizadas.
Cebolas, cenouras e morangos são representados por textos (@, %, *, respectivamente),
repolhos, por retângulos e abóboras por circunferências. Pragas, defensivos e adubos são como
“gotículas” circulares despejados numa certa região. Uma praga, ao atigir uma hortaliça, danifica-a
em uma certa medida, podendo, inclusive, matá-la. Um defensivo repara, também em certa medida,
repara a hortaliça. O adubo faz crescer a hortaliça.<br>
A colheita é feita por uma colheitadeira. A colheitadeira é um retângulo que representa sua
plataforma de colheita. Ou seja, ela colhe tudo o que estiver inteiramente contido dentro deste retângulo. A
colheitadeira se desloca em uma direção em passos de mesma magnitude daquela direção. A Ilustração 1 mostra
um terreno com várias hortaliças e uma colheitadeira se deslocando para direita em 4 passos. Note que no
primeiro passo a colheitadeira está em sua posição original e colhe alguns morangos. No segundo, ela
desloca-se para direita na medida de sua largura e colhe alguns morangos, algumas cebolas e uma abóbora e,
assim, sucessivamente.<br>
Finalmente, as hortaliças de uma região podem espalhar suas sementes para uma região próxima de
acordo com um certo fator multiplicativo. Por exemplo, se o fator multiplicativo for 2.0, cada morango gerará 2
novos morangos; se for 0.5, são necessários 2 morangos para que um novo morango seja gerado.
